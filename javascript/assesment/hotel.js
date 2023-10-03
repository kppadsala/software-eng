let user = document.getElementById("name");
let phone = document.getElementById("phone");
let email = document.getElementById("email");
let pattern = /^[A-Za-z]{0,15}$/;
let phpattern = /^[0-9]{0,10}$/;
let emailpattern = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/;

// user name
user.addEventListener("keyup", function (e) {
  if (pattern.test(e.target.value)) {
    // console.log("passed");
    user.setAttribute("class", "success");
  } else {
    user.setAttribute("class", "failed");
    // console.log("failed");
  }
});

//
phone.addEventListener("keyup", function (e) {
  if (phpattern.test(e.target.value)) {
    // console.log("passed");
    phone.setAttribute("class", "success");
  } else {
    phone.setAttribute("class", "failed");
    // console.log("failed");
  }
});

//
email.addEventListener("keyup", function (e) {
  if (emailpattern.test(e.target.value)) {
    // console.log("passed");
    email.setAttribute("class", "success");
  } else {
    email.setAttribute("class", "failed");
    // console.log("failed");
  }
});

function selectvalid() {
  let booking = document.getElementById("daybook").value;
  let d = document.getElementById("date");
  let t = document.getElementById("time");
  let s = document.getElementById("slot");
  if (booking == -1) {
    document.getElementById("msg").innerText = "Select Booking";
    return false;
  } else if (booking == 1) {
    // document.getElementById("msg").innerText = "full booking"
    // return false;
      d.style.display = "block";
      s.style.display = "none";
    t.style.display = "none";
      
      
  } else if (booking == 2) {
    // document.getElementById("msg").innerText = "half booking"
    // return false;
      s.style.display = "block";
    t.style.display = "none";
    d.style.display = "block";
  } else if (booking == 3) {
    // document.getElementById("msg").innerText = "hourly booking"
      // return false;
      s.style.display = "none";
    t.style.display = "block";
    d.style.display = "block";
  }
}
