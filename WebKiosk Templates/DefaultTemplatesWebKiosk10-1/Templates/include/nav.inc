<a class="skippy sr-only sr-only-focusable" role="navigation" aria-label="Skip links" href="#main">
    Skip to Content
</a>

<header class="navbar navbar-expand-md navbar-light bg-light mb-3">
    <a class="navbar-brand mr-auto" href="/">
       <div class="logo" style="display:inline;"></div>
       <strong>EmbARK Web Kiosk</strong>
    </a>

    <ul class="navbar-nav mt-2 mt-lg-0 px-2">
        <li class="nav-item px-2">
            <a class="nav-link" href="/">Home</a>
        </li>

        <li class="nav-item dropdown px-2">
            <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                Browse
            </a>
            <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                <a class="dropdown-item" href="/index-tree/tree/-1?records=12">Collections</a>
                <a class="dropdown-item" href="/portfolios/list?records=12">Portfolios</a>
                <!--#4Dif (Records in table([Exhibitions])>0)-->
                    <a class="dropdown-item" href="/exhibitions/list?records=12">Exhibitions</a>
                <!--#4Dendif-->
                <!--#4Dif (Records in table([Biblio_Citation])>0)-->
                    <a class="dropdown-item" href="/biblio-citation/list?records=12">Publications</a>
                <!--#4Dendif-->
                <!--#4Dif (Records in table([Acquisition])>0)-->
                    <a class="dropdown-item" href="/acquisition/list?records=12">Acquisitions</a>
                <!--#4Dendif-->
                <a class="dropdown-item" href="/kiosk/BrowseArtist.htm">Artists</a>
                <a class="dropdown-item" href="/kiosk/BrowseGeography.htm">Geography</a>
            </div>
        </li>

        <li class="nav-item px-2">
            <a class="nav-link" href="/kiosk/search.htm">Search</a>
        </li>

%{SKIP START}%
        %{if (Logged In)}%
            <li class="nav-item dropdown px-2">
                <a href="#" class="dropdown-toggle" data-toggle="dropdown" role="button" aria-haspopup="true" aria-expanded="false">Account Management <span class="caret"></span></a>
                <ul class="dropdown-menu">
                    <li><a href="/UPor">My Galleries</a></li>
                    <li><a href="/kiosk/password.htm">Change Password</a></li>
                    <li role="separator" class="divider"></li>
                    <li><a href="/LOGOFF*">Log off</a></li>
                </ul>
            </li>
        %{else}%
            <li id="downloadsMenu"><a href="/ULOG">Log on</a></li>
        %{end if}%
%{SKIP END}%

        <li class="nav-item px-2">
            <a class="nav-link" href="/kiosk/help.htm" target="_blank">Help</a>
        </li>
    </ul>

    <form class="form-inline my-2 my-lg-0" role="search" id="SearchForm" action="/4DACTION/HANDLECGI/Search" method="post">
        <input type="hidden" name="SearchField4" value="mfs"/>
        <input type="hidden" name="SearchOp4" value="any"/>
        <input type="hidden" name="SearchTable" value="Objects_1"/>
        <input type="hidden" name="display" value="thumbnails"/>
        <input type="hidden" name="records" value="10"/>

        <div style="max-width:270px;">
            <div class="input-group">
                <input class="form-control" type="text" placeholder="Search the Collection" size="35" name="SearchValue4" value=""/>
                <span class="input-group-btn">
                    <button type="submit" class="btn btn-primary" aria-label="Search Collection" name="doSubmit">
                        <span class="glyphicon glyphicon-search" aria-hidden="true"></span>
                        Search
                    </button>
                </span>
            </div>
        </div>
    </form>
</header>
