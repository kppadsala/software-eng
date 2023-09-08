function total() {
    let s1 = Number(document.getElementById("c").value);
    let s2 = Number(document.getElementById("c++").value);
    let s3 = Number(document.getElementById("database").value);
    let s4 = Number(document.getElementById("html").value);
    let s5 = Number(document.getElementById("css").value);
    let s6 = Number(document.getElementById("php").value);
    let s7 = Number(document.getElementById("java").value);
    let sum = s1 + s2 + s3 + s4 + s5 + s6 + s7;
    if (sum > 350) {
         document.getElementById("total-msg").innerText = "More Than 350 total is not allow"
        return false;
    }
    else{
        let msg = document.getElementById("total-msg").innerText = sum;
    }
    let per = sum * 100 / 350;
    if (s1>50 || s2>50 || s3>50 || s4>50 || s5>50 || s6>50 || s7>50 ) {
         document.getElementById("avg-msg").innerText = "*****"
    }
    else{
        document.getElementById("avg-msg").innerText = per + "%";
        }
}
function mark() {
    let s1 = Number(document.getElementById("c").value);
    let s2 = Number(document.getElementById("c++").value);
    let s3 = Number(document.getElementById("database").value);
    let s4 = Number(document.getElementById("html").value);
    let s5 = Number(document.getElementById("css").value);
    let s6 = Number(document.getElementById("php").value);
    let s7 = Number(document.getElementById("java").value);
    if (s1> 50 ) {
        document.getElementById("m1").innerText = "More Than 50 value is not allow"
        return false;
    }
     if (s2> 50 ) {
        document.getElementById("m2").innerText = "More Than 50 value is not allow"
        return false;
    }
     if (s3> 50 ) {
        document.getElementById("m3").innerText = "More Than 50 value is not allow"
        return false;
    }
     if (s4> 50 ) {
        document.getElementById("m4").innerText = "More Than 50 value is not allow"
        return false;
    }
     if (s5> 50 ) {
        document.getElementById("m5").innerText = "More Than 50 value is not allow"
        return false;
    }
     if (s6> 50 ) {
        document.getElementById("m6").innerText = "More Than 50 value is not allow"
        return false;
    }
     if (s7> 50 ) {
        document.getElementById("m7").innerText = "More Than 50 value is not allow"
        return false;
    }
}
