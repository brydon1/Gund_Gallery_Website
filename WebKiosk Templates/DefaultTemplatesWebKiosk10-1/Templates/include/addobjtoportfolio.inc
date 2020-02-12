%{SKIP START}%

%{if (Logged In)}%
    %{if (Records)}%
        <a href="javascript:addToPort('','','-1');">Add</a> current selection of %{Records - Object}% objects to a portfolio.
        <br/><br/>
    %{end if}%
%{end if}%

%{SKIP END}%
