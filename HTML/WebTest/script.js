function scrollToElement(elementSelector, instance = 0) {
  const elements = document.querySelectorAll(elementSelector);
  if (elements.length > instance) {
    elements[instance].scrollIntoView({ behavior: "smooth" });
  }
}

const link_1 = document.getElementById("link-1");
const link_2 = document.getElementById("link-2");
const link_3 = document.getElementById("link-3");

link_1.addEventListener("click", () => {
  scrollToElement(".header");
});

link_2.addEventListener("click", () => {
  scrollToElement(".header", 1);
});

link_3.addEventListener("click", () => {
  scrollToElement(".column");
});
