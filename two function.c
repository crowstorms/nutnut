#include<stdio.h>
void butler(void);//����ԭ�ͣ��ֽк�������������һ��������ʽ�����߱�������Ҫʹ�øú��������⺯�������Զ���ģ� 
                  //����ԭ�ͻ�ָ���˺���������
				  //�˴�void��ʾ������������ֵ 
int main(void)//�˴�void��ʾ������������ 
{
	printf("I will summon the butler function!\n");
	butler();//��main()�е���butler�������� 
	         //��ʱִ��butler��������ȡ��������main���������б����õ�λ�ã��˴���ʼִ��butler(������ 
	printf("Yes,bring me some tea and writable DVDs.\n");
	
	return 0;
}
void butler(void)//�������忪ʼ 
                 //���۽��ú��������ڸó����ļ��е��κ�λ�ã�������ı�����ִ��˳�� 
{
	printf("you rang,sir?\n");//���ó����Ҷ����butler��������һ����Ƥprintf���� 
	
}
