const os=require('os')
const { pid } = require('process')
// const os=require('node:os') both are same
// doucumentation https://devdocs.io/node/os#osendianness

console.log(os.machine())