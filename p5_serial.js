var portName = '/dev/cu.usbmodem14201';
var options = {
    baudRate: 9600
};
var serial;
var rectColor = 100;
var rectSize = 100;

var data;

function setup() {
  createCanvas(1000, 1000);
  serial = new p5.SerialPort(); 
  serial.open(portName, options); 
  serial.on('data', serialEvent);
  serial.on('error', serialError);
  
}



function draw() {
  background("#000000");
  fill("#44AAFF")
  noStroke();
    rect(1000, 1000, -1000, -rectSize);
}


function serialError(err) {
  console.log('Something went wrong with the serial port. ' + err);
}

function serialEvent() {
  var data = serial.read();
  console.log(data);
  rectSize = data;
}
