rewrite ^/admin/?(.*)$ /mvc/admin/initAdmin.php?url=$1;
rewrite ^/public/?(.*)$ /mvc/public/initPublic.php?url=$1;
rewrite ^/image/([0-9]+)/([0-9]+)/([0-9]+)/?(.*)?$ /getImg.php?id=$1&w=$2&h=$3;
rewrite ^/image/?([0-9]+)/?(.*)?$ /getImg.php?id=$1;

