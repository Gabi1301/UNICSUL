function somarDoisNumeros() {
    let num1String = window.prompt("Digite o primeiro número:");
    let num2String = window.prompt("Digite o segundo número:");

    let num1 = parseInt(num1String);
    let num2 = parseInt(num2String);
    
    if (isNaN(num1) || !num2String) {
        window.alert("Por favor, digite números válidos!");
        return;
    }

    let resultado = num1 + num2;

    window.alert("O resultado da soma é: " + resultado);
}
