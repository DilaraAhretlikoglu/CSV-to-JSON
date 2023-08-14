# CSV-to-JSON
Bu	ödevde, verilen	bir	CSV	formatlı	dosyayı, JSON	formatına	çeviren	bir	uygulamayı	C	programlama	
dilinde	yazmanız	istenmektedir.	Uygulama	çalışması	için	gerekli	tüm	parametreleri	komut	satırından	
almalıdır.	Geliştirdiğiniz	uygulamanın	genel	kullanımı	aşağıdaki	şekilde	olmalıdır:

  CSV2JSON <CSV dosya adı> <json dosya adı> <header=ON | OFF>
  
Uygulamanın	tipik,	örnek	kullanımı	aşağıda	gösterilmiştir:

  C:\> CSV2JSON deneme.csv sonuc.json header=OFF
  
Uygulamanız	verilen	csv	dosyasının	birinci	satırını	kolon	isimleri	satırı	olarak	kabul	edilip	
edilmeyeceği	komut	satırında	verilen	header parametresinden	anlamalıdır.	Eğer	header
parametresi	OFF	olarak	verilmiş	ise,	satır1,	satır2	ve	kolon1,	kolon2,…,	kolonN	isimlerini	otomatik	
olarak	kullanmalıdır.	

