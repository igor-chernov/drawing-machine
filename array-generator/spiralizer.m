clear;
ars=12000; %number of dots produced
im1=imread("m.bmp");
im(:,:)=double(im1(:,:,1) +im1(:,:,2)+im1(:,:,3)); %converting to grayscale
im=floor(im/256.0+0.7*rand(640,640)); %converting to pure
%figure 1;
%imshow(im,[0 1]);

arr=zeros(1,ars);
arrnum=[];
arrtxt='';
for x=1:ars
t=4*sqrt(x);
r=0.5*t;
if im(floor(r*cos(t))+320,floor(r*sin(t))+320)>0
arr(x)=1;
endif
endfor

im3=ones(640,640);
for x=1:ars
t=4*sqrt(x);
r=0.50*t;
im3(floor(r*cos(t))+320,floor(r*sin(t))+320)=arr(x);
endfor
%figure 2;
imshow(im3,[0 1]);
arrtxt=num2str(255-(arr(1)*1+arr(2)*2+arr(3)*4+arr(4)*8+arr(5)*16+arr(6)*32+arr(7)*64+arr(8)*128));
for i=1:ars/8-1
%arrnum=[arrnum arr(i*8+1)*1+arr(i*8+2)*2+arr(i*8+3)*4+arr(i*8+4)*8+arr(i*8+5)*16+arr(i*8+6)*32+arr(i*8+7)*64+arr(i*8+8)*128];
arrtxt=cstrcat(arrtxt,', ',num2str(255-(arr(i*8+1)*1+arr(i*8+2)*2+arr(i*8+3)*4+arr(i*8+4)*8+arr(i*8+5)*16+arr(i*8+6)*32+arr(i*8+7)*64+arr(i*8+8)*128)));
endfor
arrtxt;
save "text.txt" arrtxt