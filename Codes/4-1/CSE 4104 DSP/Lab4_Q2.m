x1s = [1, 2, 0, -3, 4]
x2s = [4, 0, -5, 1, 0]
ts = [-2, -1, 0, 1, 2]


% Convolution
for i=-5:5
  y1 = x1s .* shift(x2s, (-1 * i));
  y2 = x2s .* shift(x1s, (-1 * i));
end

figure(3)

subplot(2,1,1), stem(ts, y1, 'r'), grid on;
title('Convolution of x1(n) * x2(n)');
axis([-5 5 -5 5]);
xlabel('time');
ylabel('Signal value');


subplot(2,1,2), stem(ts, y2, 'g'), grid on;
title('Convolution of x2(n) * x1(n)');
axis([-5 5 -5 5]);
xlabel('time');
ylabel('Signal value');

