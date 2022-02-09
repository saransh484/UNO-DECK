#!/usr/bin/env node
const SerialPort = require('serialport');
const prompt = require('prompt-sync')({sigint:true});
const ReadLine = require('@serialport/parser-readline');
const exec = require('child_process').exec;

var ports = [];

let port = SerialPort.list();

port.then(res=>{
	res.forEach((val)=>{
		ports.push(val.path);
	})

	console.log(ports);

	send(ports)
})

function send(data) {

	console.log("ports available : "+ data);

		const comPort = prompt("TYPE PORT NAME : ")
	
		const port = new SerialPort(comPort, { baudRate: 9600,});

		const parser = new ReadLine();

		parser.on("data", (readings)=>{
				if (parseInt(readings)===1) {
					exec('start C:\\Users\\Path\\to\\File', function (err, stdout, stderr) {	// file or program path
    					
					})
				}
				else if (parseInt(readings)===2) {
					exec('start C:\\Users\\Path\\to\\File', function (err, stdout, stderr) { // file or program path
    					
					})
				}

		})

		port.pipe(parser);
}
