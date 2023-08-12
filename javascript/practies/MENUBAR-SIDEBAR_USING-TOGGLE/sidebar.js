// targetclass=nav class
// perform class=icon
let openbtn = document.querySelector(".tbtn");
let closebtn = document.querySelector(".cbtn");
let navmenu = document.querySelector(".nav");
let icons = document.querySelector(".fa-bars");
openbtn.addEventListener("click", function () {
  navmenu.classList.add("nav-menu");

});
closebtn.addEventListener("click", function () {
  navmenu.classList.remove("nav-menu");

});