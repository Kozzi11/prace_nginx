rewrite ^/kategorie/([0-9]+).*$ /front/category/index?ctc=$1;
rewrite ^/kategorie/?(.*)$ /front/category/index?id=$1;
rewrite ^/produkt/?([0-9]+)/([0-9]+).*$ /front/product/detail?variant=$1&ctc=$2;
rewrite ^/produkt/?([0-9]+).*$ /front/product/detail?variant=$1;
rewrite ^/produkt/?(.*)$ /front/product/detail?id=$1;
rewrite ^/product/?([0-9]+)/([0-9]+).*$ /front/product/pavgDetail?variant=$1&ctc=$2;
rewrite ^/product/?([0-9]+).*$ /front/product/pavgDetail?variant=$1;
rewrite ^/product/?(.*)$ /front/product/pavgDetail?id=$1;
rewrite ^/admin/?(.*)$ /mvc/admin/initAdmin.php?url=$1;
rewrite ^/app/?(.*)$ /mvc/app/initApp.php?url=$1;
rewrite ^/cms/?(.*)$ /front/article/detail?id=$1;
rewrite ^/front/?(.*)$ /mvc/front/initApp.php?url=$1;
rewrite ^/image/([0-9]+)/([0-9]+)/([0-9]+)/?(.*)?$ /getImg.php?id=$1&w=$2&h=$3;
rewrite ^/image/?([0-9]+)/?(.*)?$ /getImg.php?id=$1;

