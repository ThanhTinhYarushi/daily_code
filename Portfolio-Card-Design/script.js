const allLinks = document.querySelectorAll(".tabs a");
const allTabs = document.querySelectorAll(".tab-content");

allLinks.forEach((link) => {
  link.addEventListener("click", () => {
    const linkId = link.id;

    allLinks.forEach((l) => l.classList.toggle("active", l === link));
    allTabs.forEach((tab) =>
      tab.classList.toggle("active-tab-content", tab.id === linkId)
    );
  });
});

// Khúc dưới này tự viết


function joke() {
  const joke = document.getElementById("joke");

  joke.addEventListener("click", () => {
    window.location.href = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
  });
}

joke()