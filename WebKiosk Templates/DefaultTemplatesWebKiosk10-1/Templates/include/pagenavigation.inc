<!-- start pagenavigation -->

<!-- draws next/previous links at the top of every page that has a record selection -->

<style>
    .pager {
        margin-bottom: 0;
        padding-bottom: 0;
    }
    .pager li > span.textOnly {
      display: inline-block;
      padding: 5px 14px;
      background-color: #fff;
      border: 0;
    }
</style>

<table width=100% class="mt-2">
    <tr>
        <td>
            <!--#4DIF (HasPrevious)-->
                <a href="%{First Page}%">
                    <button type="button" class="btn btn btn-outline-primary">
                        <span class="fa fa-step-backward" aria-hidden="true"></span>
                        First
                    </button>
                </a>
                <a href="%{Previous Page}%">
                    <button type="button" class="btn btn btn-outline-primary">
                        <span class="fa fa-chevron-left" aria-hidden="true"></span>
                        Previous
                    </button>
                </a>
            <!--#4Delse-->
                <button type="button" class="btn btn-outline-secondary" disabled>
                    <span class="fa fa-step-backward" aria-hidden="true"></span>
                    First
                </button>
                <button type="button" class="btn btn-outline-secondary" disabled>
                    <span class="fa fa-chevron-left" aria-hidden="true"></span>
                    Previous
                </button>
            <!--#4Dendif-->
        </td>
        <td class="text-center">
            <!--#4DIF ((lPerPage > 1) & (lRecords > 1))-->
        		Showing %{Current Record}% to %{Last Record}% of %{Records}% Records
        	<!--#4DELSE-->
        		Showing %{Current Record}% of %{Records}%
        	<!--#4DENDIF-->
        </td>
        <td>
            <div class="float-right">
                <!--#4DIF (HasNext)-->
                    <a href="%{Next Page}%">
                        <button type="button" class="btn btn-outline-primary">
                            Next
                            <span class="fa fa-chevron-right" aria-hidden="true"></span>
                        </button>
                    </a>
                    <a href="%{Last Page}%">
                        <button class="btn btn-outline-primary" >
                            Last
                            <span class="fa fa-step-forward" aria-hidden="true"></span>
                        </button>
                    </a>
                <!--#4Delse-->
                    <button type="button" class="btn btn-outline-secondary" disabled>
                        Next
                        <span class="fa fa-chevron-right" aria-hidden="true"></span>
                    </button>
                    <button type="button" class="btn btn-outline-secondary" disabled>
                        Last
                        <span class="fa fa-step-forward" aria-hidden="true"></span>
                    </button>
                <!--#4Dendif-->
            </div>
            </div>
        </td>
    </tr>
</table>

<p class="err">%{Message}%</p>

<!-- end pagenavigation -->
