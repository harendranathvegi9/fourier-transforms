Fs = 150; % Sampling frequency
t = -0.5:1/Fs:0.5; % Time vector of 1 second
w = .2; % width of rectangle
x rectpuls(t % Generate Square Pulse
= t, w); nfft = 512; % Length of FFT
% Take fft, padding with zeros so that length(X) is equal to nfft
X = fft(x,nfft);
% FFT is symmetric, throw away second half
Power Spectrum of a Square Pulse
y , y
X = X(1:nfft/2);
% Take the magnitude of fft of x
mx = abs(X);
% Frequency vector
f = (0:nfft/2-1)*Fs/nfft;
% Generate the plot, title and labels.
figure(1);
plot(t,x);
title('Square Pulse Signal');
xlabel('Time (s)');
ylabel('Amplitude');
Frequency (Hz)
ylabel( Amplitude );
figure(2);
plot(f,mx);
title('Power Spectrum of a Square Pulse');
xlabel('Frequency (Hz)');
ylabel('Power');