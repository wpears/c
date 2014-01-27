var fs=require('fs');
var str=require('./strip.js');
fs.createReadStream('testfile.txt').pipe(new str()).pipe(fs.createWriteStream('stripfi'))