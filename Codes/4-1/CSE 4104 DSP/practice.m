x1 = [1, 2, 0, -3, 4]
x2 = [4, 0, -5, 1, 0]
t = [-2, -1, 0, 1, 2]

% Input
figure(1)

subplot(2,1,1), stem(t, x1, 'r'), grid on;
title('Input Signal x1(n)');
axis([-5 5 -5 5]);
xlabel('time');
ylabel('Signal value');


subplot(2,1,2), stem(t, x2, 'b'), grid on;
title('Input Signal x2(n)');
axis([-5 5 -5 5]);
xlabel('time');
ylabel('Signal value');


% Output
figure(2)

% Addition
subplot(3,1,1), stem(t, x1 + x2, 'r'), grid on;
title('Addtition');
axis([-5 5 -5 5]);
xlabel('time');
ylabel('Signal value');

% Subtraction
subplot(3,1,2), stem(t, x1 - x2, 'g'), grid on;
title('Subtraction');
axis([-5 5 -5 5]);
xlabel('time');
ylabel('Signal value');

% Multiplication
subplot(3,1,3), stem(t, x1 .* x2, 'b'), grid on;
title('Multiplication');
axis([-5 5 -5 5]);
xlabel('time');
ylabel('Signal value');

