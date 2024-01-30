const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let differentCount = 0;
let repeatedCount = 0;
const stickers = new Set();

rl.question('', (N) => {
  rl.on('line', (line) => {
    const sticker = parseInt(line);
    
    if (stickers.has(sticker)) {
      repeatedCount++;
    } else {
      stickers.add(sticker);
      differentCount++;
    }
  });

  rl.on('close', () => {
    console.log(differentCount);
    console.log(repeatedCount);
  });
});
