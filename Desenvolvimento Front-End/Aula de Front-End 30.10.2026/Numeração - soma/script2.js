let numeros = [];

const input = document.getElementById('numeroInput');
const btn = document.getElementById('btnAdicionar');
const listaHtml = document.getElementById('listaNumeros');
const somaHtml = document.getElementById('somaTotal');
const erroHtml = document.getElementById('mensagemErro');

function processarEntrada() {
    let valor = input.value.trim();
    erroHtml.innerText = ""; 

    if (valor === "") return;

    if (valor.toLowerCase() === 's') {
        input.disabled = true;
        btn.disabled = true;
        input.placeholder = "Processo finalizado.";
        input.value = "";
        
        let somaFinal = 0;
        for (let i = 0; i < numeros.length; i++) {
            somaFinal += numeros[i];
        }
        
        somaHtml.innerText = somaFinal;
        alert("Processo encerrado! A soma final é: " + somaFinal);
        return;
    }

    let numero = parseFloat(valor);

    if (!isNaN(numero)) {
        numeros.push(numero);

        listaHtml.innerText = "[" + numeros.join(", ") + "]";
        
        let somaParcial = 0;
        for (let i = 0; i < numeros.length; i++) {
            somaParcial += numeros[i];
        }
        somaHtml.innerText = somaParcial;
    
        input.value = "";
        input.focus();
    } else {
        erroHtml.innerText = "Digite um número válido ou 's' para parar.";
    }
}

btn.addEventListener('click', processarEntrada);

input.addEventListener('keypress', function(e) {
    if (e.key === 'Enter') {
        processarEntrada();
    }
});
