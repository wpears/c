var stream = require('stream');
var trans = stream.Transform;

function stripTrailing (options){
  trans.call(this,options);
}

stripTrailing.prototype=Object.create(trans.prototype);

stripTrailing.prototype._transform=function(chunk,encoding,callback){
  this.push(chunk.toString().split(/\s+\n/).join('\n'));
}

module.exports = stripTrailing;
