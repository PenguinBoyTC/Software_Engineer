var x=1;
function Previous(){
  if(x<=1)
  {
    x=5;
  }
  else
  {
    x--;
  }
  console.log("x:"+x);
  
  Slide();
}
function Next(){
  if(x>=5)
  {
    x=1;
  }
  else
  {
    x++;
  }
  console.log("x:"+x);
  
  Slide();
}
function Slide(){
  if(x==1)
  {
    document.image.src = "1.jpg"
    console.log(1);
  }
  else if(x==2)
  {
    document.image.src = "2.png"
    console.log(2);    
  }
  else if(x==3)
  {
    document.image.src = "3.png"
    console.log(3);
  }
  else if(x==4)
  {
    document.image.src = "4.jpg"
    console.log(4); 
  }
  else
  {
    document.image.src = "5.jpg"
    console.log(5);    
  }
}
