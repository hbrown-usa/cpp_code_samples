/* Readme Section

Copyright:
  
  Copyright 2016 Harold K. Brown
  
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

Annotation:
  See hello_world.cpp program for a background on, "Hello, World!".  
  
  The Common Gateway Interface (CGI) originated (Ref 1) from work at the
  National Center for Supercomputing Applications (NCSA) team.  Ken Coar
  chaired the first working group that captured the original work and
  formalized CGI Version 1.1 as defined in RFC 3875.  Referenced as key
  contributors are:
  * Rob McCool (author of the NCSA HTTPd Web Server)
  * John Franks (author of the GN Web Server)
  * Ari Luotonen (the developer of the CERN httpd Web Server)
  * Tony Sanders (author of the Plexus Web Server)
  * George Phillips (Web server maintainer at the University of British Columbia)
  
  This program creates an HTML (Ref 2) page to display "Hello, World!".  Tim Berners-Lee
  a physicist working at CERN in 1980 proposed and prototyped ENQUIRE an SGML (Ref 3) 
  application, which incubated the modern HTML standard.  IETF created an HTML Working Group,
  which in 1995 completed "HTML 2.0", the first formal HTML specification.  SGML was 
  formalized in ISO 8879:1986 in 1986.  HTML complied with SGML standards until HTML5.

Testing:
Testing can be performed on most any operating system with a c++ compiler and a web server.
One of the most popular web servers is apache2.  The following instructions are for Debian 8.

(1) Compile program as follows in a directory of your choosing:
gcc hello_world_cgi.cpp -lstdc++ -o hello_world_cgi

(2) Install apache2:
sudo apt-get update
sudo apt-get install apache2

(3) Active CGI Scripts
sudo a2enmod cgi

Note that this step set the following links for you:
/etc/apache2/mods-enabled/cgi.load -> ../mods-available/cgi.load
/etc/apache2/conf-enabled/serve-cgi-bin.conf -> ../conf-available/serve-cgi-bin.conf

The file serve-cgi-bin.conf defines where the cgi-bin directory will be located.  The default is
ScriptAlias /cgi-bin/ /usr/lib/cgi-bin/

(4) To start, restart or stop the apache2 server do one of the following:
sudo service apache2 start
sudo service apache2 restart
sudo service apache2 stop
The apache2 server must be running for the cgi program to function from a web browser.

(5) Copy hello_world_cgi binary to:
/usr/lib/cgi-bin
Be sure to preserver the execute privileges.  ScriptAlias defines this path.

(6) To invoke the cgi program, use the following URL in your browser on the
machine running the apache2 server:
http://localhost/cgi-bin/hello_world_cgi
ScriptAlias defines /cgi-bin/.
*/

// (Ref 4)
#include <iostream>
using namespace std;

int main(){
   // The following standard output is streamed via the webserver
   // to the web broswer uing the http or http/2 protocol.
   // A CGI program can use most any programatic method to derive
   // the html stream.
   cout << "Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>Hello, World!</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";
   cout << "<h2>Hello, World!</h2>\n";
   cout << "<p> This page was created by a C++ GGI program.  Enjoy!</p>\n";
   cout << "<p> Copyright 2016 Harold K. Brown. </p>\n";
   cout << "<p> See source code for terms of use at . </p>\n";
   
   cout << "</body>\n";
   cout << "</html>\n";
   return 0;
}

/*
References:
(1) Common Gateway Interface. (2016, November 3). In Wikipedia, The Free Encyclopedia. Retrieved 15:53, November 3, 2016, from https://en.wikipedia.org/w/index.php?title=Common_Gateway_Interface&oldid=747651857

(2) HTML. (2016, November 11). In Wikipedia, The Free Encyclopedia. Retrieved 07:21, November 11, 2016, from https://en.wikipedia.org/w/index.php?title=HTML&oldid=748931046

(3) Standard Generalized Markup Language. (2016, November 11). In Wikipedia, The Free Encyclopedia. Retrieved 12:28, November 11, 2016, from https://en.wikipedia.org/w/index.php?title=Standard_Generalized_Markup_Language&oldid=748958036

(4) Many others, including this author, has similar examples going back more than a decade.
*/
