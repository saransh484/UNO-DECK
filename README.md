# UNO-DECK
#### Stream Deck type clone using Arduino Uno and NodeJS


## Wiring up
![This is an image](https://images2.imgbox.com/f8/46/ol6gnPEz_o.png)
## Getting Started
> upload the `button_serial.ino` file to the Arduino Uno \*(_Modify as u feel_)\*

> run the script using `node .` or `node index.js`

> Type the `COM` port of the Arduino

> Press the button and your application / file will open

## Changing the file to open
In the `index.js` file change the path 
i.e `exec('start File\\path\\') `

## Dependencies
>`npm i serialport prompt-sync child-process`