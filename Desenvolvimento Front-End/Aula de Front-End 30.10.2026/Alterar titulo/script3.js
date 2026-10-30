const titulo = document.getElementById('meuTitulo');
const btnTitulo = document.getElementById('btnAlteraTitulo');
const btnFundo = document.getElementById('btnAlteraFundo');

btnTitulo.addEventListener('click', function() {
    titulo.textContent = 'Transformers';
});

let corAlternada = false;

btnFundo.addEventListener('click', function() {
    if (!corAlternada) {
        document.body.style.backgroundColor = '#e0f2fe'; 
    } else {
        document.body.style.backgroundColor = '#f4f4f9'; 
    }
    corAlternada = !corAlternada; 
});
