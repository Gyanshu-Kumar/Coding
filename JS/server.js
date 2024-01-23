// const http = require('http');
// const url = require('url');

// function handler(req, res) {
//     const parsedUrl =url.parse(req.url, true);
//     if(parsedUrl.pathname === '/'){
//         res.writeHead(200, {'Content-type':'text/plain'});
//         res.write('Hello, I am a webserver !');
//         res.end();
//     }else {
//         res.writeHead(404, {'Content-type':'text/plain'});
//         res.end();
//     };



// }

// const server = http.createServer(handler);

// server.listen(3000);
// var https = require('http');
// https.createServer(function(req, res){
//     var path = req.url.replace(/\/?(?:\?.*)?$/, '').
//     toLowerCase();
//     switch(path) {
//         case '':
//             res.writeHead(200,{'Content-Type':'text/plain'});
//             res.end("Homepage");
//             break;
//         case '/about':
//             res.writeHead(200,{'Content-Type':'text/plain'})
//             res.end("About");
//             break;
//         default:  
//             res.writeHead(404, {'Content-Type':'text/plain'});
//             res.end("Not Found");
//             break;
//     }
// }).listen(8080);
// console.log("Working")


const http = require('http');


http.createServer(function (req, res) {

	
	res.writeHead(200, { 'Content-Type': 'text/html' });

	const url = req.url;

	if (url === '/about') {
		res.write(' Welcome to about us page');
		res.end();  
	}
	else if (url === '/contact') {
		res.write(' Welcome to contact us page');
		res.end();
	}
	else {
		res.write('Hello World!');
		res.end();
	}
}).listen(3000, function () {
	
	console.log("server start at port 3000");
});
