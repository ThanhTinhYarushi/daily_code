var arr = ["slider1.jpg", "slider2.jpg", "slider3.jpg"];
var content = [
  "lorem contenttttt 1",
  "lorem contentttttt 2",
  "lorem contenttttttt 3",
];

var idx = 1;
var cssHeading = ".text-content .text-heading";
var cssContent = ".text-content .text-description";
setInterval(function () {
  var slider = document.querySelector(".slider");
  document.querySelector(cssHeading).innerText = content[idx].split("|")[0];
  document.querySelector(cssContent).innerText = content[idx].split("|")[1];
  slider.style.background = `url('./assets/img/slider/${
    arr[idx++]
  }')  top / cover no-repeat`;
  if (idx == 3) {
    idx = 0;
  }
}, 5000);
