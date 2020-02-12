<div id="page-block">
    <div><title>Gund Gallery | Collections</title></div>
	<div id="title-banner">
		<a href="http://thegundgallery.org" target="_blank"><img src="/graphics/GundLogo_stacked.jpg" width="172px" height="73px" alt="Gund Gallery | Kenyon College"/></a>
		
	</div>
	
<!--Original Menu, lives below.-->	

	<div id="left-menu">

		<div class="menu-item"><form name="searchForm" id="searchForm" action="/4DACTION/HANDLECGI/CTN3" method="post">
				<input type="hidden" name="sid" value="{SessionID}"/>
				<input type="hidden" name="SearchType" value="all"/>
				<input type="hidden" name="WholeWord" value="0"/>
				<input type="hidden" name="RefineSearch" value="NewSelection"/>

				<input type="text" name="theKW" size="10" style="background-color: #CCCCCC; width: 85;"/>
				<input type="button" onclick="document.searchForm.submit()" value="search"/>
		</form></div>

		<div class="menu-item" id="home" onmouseover="menuOn('home');" onmouseout="menuOff('home');" onclick="document.location='/';"><a href="/?sid={SessionId}&x={Sequence}">Home</a></div>

		<div class="menu-item" id="collections" onmouseover="menuOn('collections');" onmouseout="menuOff('collections');" onclick="document.location='/IT_-1?sid={SessionId}&x={Sequence}';"><a href="/kiosk/browseartist.htm?sid={SessionId}&x={Sequence}">Browse Artist <!--Themes--></a></div>

		<!--<div class="menu-item" id="portfolios" onmouseover="menuOn('portfolios');" onmouseout="menuOff('portfolios');" onclick="document.location='/POR1?sid={SessionId}&x={Sequence}';"><a href="/POR1?sid={SessionId}&x={Sequence}">Collections</a></div>-->

		<!--<div class="menu-item" id="community" onmouseover="menuOn('community');" onmouseout="menuOff('community');" onclick="document.location='/SPOR1?sid={SessionId}&x={Sequence}';"><a href="/SPOR1?sid={SessionId}&x={Sequence}">User Galleries</a></div>-->

		<!--<div class="menu-item" id="search" onmouseover="menuOn('search');" onmouseout="menuOff('search');" onclick="document.location='/QS_2?sid={SessionId}&x={Sequence}';"><a href="/QS_2?sid={SessionId}&x={Sequence}">Search</a></div>-->

		{if (Logged In)}
			<div class="menu-item">
					<div class="account-mgmt">
							<div class="account-mgmt-header">Account Management:</div>

							<div class="account-mgmt-item" id="myportfolios" onmouseover="menuOn('myportfolios');" onmouseout="menuOff('myportfolios');" onclick="document.location='/UPor?sid={SessionId}&x={Sequence}';"><a href="/UPor?sid={SessionId}&x={Sequence}">My Galleries</a></div>

							<div class="account-mgmt-item" id="password" onmouseover="menuOn('password');" onmouseout="menuOff('password');" onclick="document.location='/kiosk/password.htm?sid={SessionId}&x={Sequence}';"><a href="/kiosk/password.htm?sid={SessionId}&x={Sequence}">Change Password</a></div>

							<div class="account-mgmt-item" id="logoff" onmouseover="menuOn('logoff');" onmouseout="menuOff('logoff');" onclick="document.location='/LOGOFF*/?sid={SessionId}&x={Sequence}';"><a href="/LOGOFF*/?sid={SessionId}&x={Sequence}">Log off</a></div>
					</div>
			</div>
		{else}
			<!--<div class="menu-item" id="logon" onmouseover="menuOn('logon');" onmouseout="menuOff('logon');" onclick="document.location='/ULOG?sid={SessionID}&x={Sequence}'"><a href="/ULOG?sid={SessionId}&x={Sequence}">Log on</a></div>-->
		{end if}

		<div class="menu-item" id="help" onmouseover="menuOn('help');" onmouseout="menuOff('help');"><a href="/kiosk/help.htm" target="_blank">Help</a></div>

	</div> 
