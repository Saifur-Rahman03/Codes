% Complex Plot
j = sqrt(-1);
t = -5: 0.001: 5;
f = 3;
theta = (2 * pi * f * t);
z = cos(theta) + (j * sin(theta));
y1 = exp( (1 * j) * theta);

x = real(z);
y = imag(z);

% Plot Complex Sinusoidal
figure(1)
subplot(3, 1, 1); plot(t, y1);
axis([-3 3 -2 2])%xmin xmax ymin ymax
xlabel('time');
ylabel('real part');
%legend('cosine'); %serially labelling
title('Complex Sinusoidal Plot');
grid on

subplot(3, 1, 2); plot(t, abs(y1), 'g');
axis([-3 3 -2 2])%xmin xmax ymin ymax
xlabel('time');
ylabel('Magnitude value');
%legend('cosine'); %serially labelling
title('Magnitude of Complex Sinusoidal Plot');
grid on

subplot(3, 1, 3); plot(x, y, 'r');
axis([-3 3 -2 2])%xmin xmax ymin ymax
xlabel('real part');
ylabel('imaginary part');
%legend('cosine'); %serially labelling
title('Magnitude of Complex Sinusoidal Plot');
grid on

% 3D Plot Complex Sinusoidal
figure(2)
plot3(t, x, y)
axis([-3 3 -2 2])%xmin xmax ymin ymax
xlabel('time');
ylabel('real part');
zlabel('imaginary part');
%legend('cosine'); %serially labelling
title('Complex 3D Plot');
grid on
