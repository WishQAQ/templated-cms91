<?php
$z[0]=Array("global","",659,687);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("global","",700,726);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("global","",767,794);
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("global","",834,864);
$z[3][4]['name']="cfg_description";
$z[4]=Array("global","",882,914);
$z[4][4]['name']="cfg_templets_skin";
$z[5]=Array("include","",1189,1224);
$z[5][4]['filename']="head.htm";
$z[6]=Array("global","",1409,1441);
$z[6][4]['name']="cfg_templets_skin";
$z[7]=Array("arclist","\r\n<li>\r\n<div class=\"new-ghost-img\"><img src=\"/images/defaultpic.gif\" /></div>\r\n<div class=\"new-ghost-info\">\r\n<strong><a href=\"[field:arcurl/]\" target=\"_blank\" title=\"[field:title/]\">[field:title/]</a>[field:array runphp='yes']@me = (strpos(@me['litpic'],'defaultpic') ? \"\" : \"<img src='{@me['litpic']}'/>\"); [/field:array]</strong><br />\r\n软件语言：[field:yuyan/]<br />\r\n软件大小：[field:daxiao/]<br />\r\n发布日期：[field:pubdate function=\"Mydate('Y-m-d',@me)\"/]<br />\r\n<div class=\"download\"><a href=\"[field:arcurl/]\" target=\"_blank\">立即下载</a></div>\r\n</div>\r\n</li>\r\n",1535,2256);
$z[7][4]['row']="8";
$z[7][4]['typeid']="1,7";
$z[7][4]['titlelen']="200";
$z[7][4]['orderby']="id";
$z[7][4]['orderway']="desc";
$z[7][4]['addfields']="yuyan,daxiao";
$z[7][4]['channelid']="18";
$z[8]=Array("global","",2327,2359);
$z[8][4]['name']="cfg_templets_skin";
$z[9]=Array("type","[field:typelink/]",2501,2553);
$z[9][4]['typeid']="46";
$z[10]=Array("sql","[field:content/]",2595,2682);
$z[10][4]['sql']="select content from cms_arctype where id=46";
$z[11]=Array("include","",2700,2736);
$z[11][4]['filename']="right.htm";
$z[12]=Array("flink","",2953,2976);
$z[12][4]['row']="500";
$z[13]=Array("include","",3026,3063);
$z[13][4]['filename']="footer.htm";

?>