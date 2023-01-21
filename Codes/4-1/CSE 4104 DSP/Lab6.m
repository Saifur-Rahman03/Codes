% Fourier Transformation

t = -2:0.01:2;
xt = [(0:0.01:1) (0.99:-0.01:0.01) (0:0.01:1) (0.99:-0.01:0)];
j = sqrt(-1);
x_t = 0;
F = 1/2;


% figure of original signal
figure(1);
plot(t, xt, 'g'); xlabel('t'); ylabel('x(t)');
legend('F(t) = Original Signal');
title('Original Signal');


N = 10; %value of k
x = 1;
for k = (-1)*N : N
  C(x) = ((-1)^N) / (((pi)^2) * (N^2));
  if k == 0
    C(x) = 1/2;
  endif
  x = x + 1;
end

for k = (-1)*N : N
  for x = 1: (2*N + 1)
      if k == 0
        C(x) = 1/2;
      endif
    x_t = C(x) * (e.^(j * 2 * pi .* k * F .* t));
  end
end

% figure of fourier signal
figure(2);
plot(t, xt, 'g');
hold on;
plot(t, x_t, 'r');
xlabel('t'); ylabel('x(t)');
legend('Original Signal', 'Fourier Signal');
title('Original Signal vs Fourier Signal');
