/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/JSP_Servlet/Servlet.java to edit this template
 */

import java.io.IOException;
import java.io.PrintWriter;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author
 */
public class verifyUSN extends HttpServlet {
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        PrintWriter out=response.getWriter();
        String usn=request.getParameter("usn");
        Pattern pattern=Pattern.compile("[1-4][A-Z]{2}[0-9]{2}[A-Z]{2}[0-9]{3}");
        Matcher match=pattern.matcher(usn);
        if(match.find()){
            out.println("<h1>Valid USN</h1>");
        }
        else{
            out.println("<h1>Invalid USN</h1>");
        }
    }
}