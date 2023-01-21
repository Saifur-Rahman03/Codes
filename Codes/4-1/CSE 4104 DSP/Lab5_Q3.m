% Sinc plot

t = -5: 0.001: 5;
f = 3;

y = sin(2 * pi * f * t);

if t == 0
  y1 = 1;
else
  y1 = y ./ (2 * pi * f * t);
endif

y2 = (y1 .^ 2);

figure(3)
subplot(2,1,1),plot(t,y1, 'r'),grid on;
axis([-3 3 -0.5 1.5])%xmin xmax ymin ymax
xlabel('time');
ylabel('Sinc value');
title('Sinc Plot');
grid on

subplot(2,1,2),plot(t,y2, 'k'),grid on;
axis([-3 3 -0.5 1.5])%xmin xmax ymin ymax
xlabel('time');
ylabel('Sinc Square value');
title('Sinc Square Plot');
grid on

