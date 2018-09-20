function Valiate(){
  var password1 = document.getElementById("password1").value;//question 1box or 2 boxes
  var password2 = document.getElementById("password2").value;
  console.log(password1);
  console.log(password2);
  if(password1.length<8)//question??<8?or>8?
  {
    alert("The passwords are not at least 8 characters long ");
  }
  else if(password1!=password2)
  {
    alert("The passwords entered don't match ");
  }
  else
  {
      alert("Match!!!");
  }
}
