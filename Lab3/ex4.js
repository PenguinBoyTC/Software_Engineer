function changeborder(paragraph) {
  var Bordervalue = document.getElementById("border1").value;
  if(Bordervalue=="red"||Bordervalue=="blue"||Bordervalue=="green")
  {
    // document.getElementById("paragraph").style.borderColor = "red";
    paragraph.style.borderColor = Bordervalue;
  }
  else if(Bordervalue=="thin"||Bordervalue=="medium"||Bordervalue=="thick")
  {
    paragraph.style.borderWidth = Bordervalue;
  }
  else
  {
    alert("Please enter the colors(red, green, blue), or width(thin, medium, thick) to change the border.");
  }
}
function Background(paragraph) {
  var backgroundvalue = document.getElementById("Background").value;
  if(backgroundvalue=="red"||backgroundvalue=="blue"||backgroundvalue=="green")
  {
    paragraph.style.backgroundColor = backgroundvalue;
  }
  else
  {
    alert("Please enter red, green, or blue to change the background.");
  }
}
function change(){
  var paragraph = document.getElementById("paragraph");
  Background(paragraph);
  changeborder(paragraph);

}
