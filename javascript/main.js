
let onclick = () => {
    let n = document.getElementById('name').value
    let m = document.getElementById('message')
    m.innerHTML += n
    console.log(n)
    document.createElement()
}

let btn = document.getElementById('btn')
btn.onclick = () => { onclick() }