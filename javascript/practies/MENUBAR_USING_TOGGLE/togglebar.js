// targetclass=nav class
// perform class=icon
let btn = document.querySelector(".tbtn");
let navmenu = document.querySelector(".nav");
let icons = document.querySelector(".fa-bars");
btn.addEventListener("click", function () {
  navmenu.classList.toggle("nav-menu");

  if (navmenu.classList.contains("nav-menu") == true) {
    icons.classList.remove("fa-bars");
    icons.classList.add("fa-close");
  } else {
    icons.classList.remove("fa-close");
    icons.classList.add("fa-bars");
  }
});
