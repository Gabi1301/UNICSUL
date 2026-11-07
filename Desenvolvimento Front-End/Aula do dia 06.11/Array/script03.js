function verificar() {
    //CRIANDO ARRAYS COM AS NOTAS
    let notas = [8,5,9,6,7,4,10];
    let resultado = document.getElementById("resultado");

    //LIMPANDO O RESULTADO ANTERIOR
    resultado.innerHTML = "";

    //PERCORRENDO O ARRAY
    for (let i = 0; i < notas.length; i++) {
        resultado.innerHTML += "<p>Aluno" + (i + 1) + "- Nota: " + notas[i] + "</p>";
    // VERIFICAR APROVAÇÃO
        if (notas[i] >= 7) {
            resultado.innerHTML += "<p style='color:green'>Aprovado!</p>";
        } else {
            resultado.innerHTML += "<p style='color:red'>Reprovado!</p>";
        }
    }
}