function verificar() {
    let nota = parseFloat(document.getElementById("nota").value);
    let resultado = document.getElementById("resultado");

    //VERIFICAR SE A NOTA FOI PREENCHIDA
    if (isNaN(nota) || nota < 0 || nota > 10) {
        resultado.textContent = "Digite uma nota válida entre 0 e 10.";
        resultado.className = "orange";
        return;
    }

    //ESTRUTURA WHILE
    let contador = 0;
    while (contador < 1) {
        if (nota >= 7) {
            resultado.textContent = "Aprovado";
            resultado.className = "aprovado";
        } else {
            resultado.textContent = "Reprovado";
            resultado.className = "reprovado";
        }
        contador++;
    }
}