function verificar() {
    let nota = parseFloat(document.getElementById("nota").value);
    let resultado = document.getElementById("resultado");   

    if (isNaN(nota) || nota < 0 || nota > 10) {
        resultado.textContent = "Digite uma nota válida entre 0 e 10.";
        resultado.className = "";
        return;
    }

    //ESTRUTURA SWITCH
    switch (true) {
        case (nota >= 7):
            resultado.textContent = "Aprovado";
            resultado.className = "aprovado";
            break;
            default:
    //O DEFAULT FUNCIONA COM ELSE
    resultado.textContent = "Reprovado";
    resultado.className = "reprovado";
    break
}
}
