#!/usr/bin/node
const args = process.argv[2];
const parsedNum = parseInt(args);

if (isNaN(parsedNum)) {
  console.log('Not a number');
} else {
  console.log(`My number: ${parsedNum}`);
}
