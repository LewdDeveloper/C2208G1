function display_random_img(e)
{
    let seed = Math.random() * 10
    document.getElementById("dyna-img").src = `https://picsum.photos/seed/${seed}/256`
}
