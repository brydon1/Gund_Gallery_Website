<!-- inserts the record selection description for the current page -->
<div class="active-records">
	<!--#4DIF ((lPerPage > 1) & (lRecords > 1))-->
		Showing %{Current Record}% to %{Last Record}% of %{Records}% Records
	<!--#4DELSE-->
		Showing %{Current Record}% of %{Records}%
	<!--#4DENDIF-->
</div>
