t = -2:0.01:2;
t1 = -2:0.125:2;
% Sine signal
sine = sin(2*pi*(8*t));

% Cosine signal
cosine = cos(2*pi*8*t);

% Exponential signal
ex = exp(t);

% Unit Step signal
unitstep = t >= 0

% Unit Ramp signal
ramp = t.* unitstep

figure(1)
plot(t, sine, t, cosine, t, ex, t, unitstep, t, ramp);
axis([-2 2 -2 2])
xlabel('time');
ylabel('signal value');
legend('sine', 'cosine', 'exponential', 'unit step', 'unit ramp'); %serially labelling
title('Q1 Plots');
grid on
