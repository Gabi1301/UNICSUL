let numeros = [1, 2, 3, 4, 5];
function mostrarNumeros() {
    document.getElementById("numeros").innerHTML = "Numeros: " + numeros;
}

function somarNumeros() {
    let soma = 0;
    for (let i = 0; i < numeros.length; i++) {
        soma += numeros[i];
    }
    document.getElementById("resultado").innerHTML = "Resultado da Soma: " + soma;
}