let slides = document.querySelectorAll(".slide")
// console.log(slides);
var counter = 0;

slides.forEach(
    (slide, index) => {
        slide.style.left = `${index*100}%` 
    }
)

let goleft = () => {
    counter--
    slideimg()
}

let goright = () => {
    counter++
    slideimg()
}

let slideimg = () => {
    slides.forEach(
        (slide) => {
            slide.style.transform = `translateX(-${counter*100}%)`
        }
    )
}