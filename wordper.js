process.stdin.resume();
process.stdin.setEncoding('utf8')
process.stdin.on('data',function(chunk){
  var arr=chunk.split(/\s+/);
  arr.forEach(function(word){
    if (word !== '')
    process.stdout.write(word+'\n')
  })
})