document.getElementById('loginForm').addEventListener('submit', function(event) {
    event.preventDefault();

    const emailInput = document.getElementById('email');
    const passwordInput = document.getElementById('password');

   
    const emailError = document.getElementById('emailError');
    const passwordError = document.getElementById('passwordError');

    emailInput.classList.remove('error-border');
    passwordInput.classList.remove('error-border');
    emailError.textContent = '';
    passwordError.textContent = '';

    let isValid = true;

    if (emailInput.value.trim() === '') {
        emailInput.classList.add('error-border');
        emailError.textContent = 'O campo e-mail deve ser preenchido.';
        isValid = false;
    }

    if (passwordInput.value.trim() === '') {
        passwordInput.classList.add('error-border');
        passwordError.textContent = 'O campo senha deve ser preenchido.';
        isValid = false;
    }

    if (isValid) {
        alert('Formulário preenchido corretamente!');
    }
});
