let canvas = document.getElementById("canvas");
let ctx = canvas.getContext("2d");

var img = new Image();
img.src = 'dino.png';

var x =0;
var y =0;

var downkeys = {};

window.addEventListener('keydown',onKeyDown);
window.addEventListener('keyup',onKeyUp);

function onKeyDown(event){
    downkeys[event.code]= true;
}
function onKeyUp(event){
    downkeys[event.code]= false;
}

function run(){
    ctx.fillStyle="white";
    ctx.fillRect(0,0,canvas.width,canvas.height);
    ctx.drawImage(img,x,y,20,20);

    if(downkeys['ArrowLeft'])
        x-=10;
    if(downkeys['ArrowRight'])
        x+=10;
    if(downkeys['ArrowUp'])
        y-=10;
    if(downkeys['ArrowDown'])
        y+=10;
    
    requestAnimationFrame(run);
}
requestAnimationFrame(run);