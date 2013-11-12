BFS Example:
bool bfs(int src) {
	memset(vis, 0, sizeof(vis));
	vis[src] =true;
        queue.clear();
	queue.push_back(src);
	
	while (!queue.empty()) {
		now = queue.front();
		queue.pop_front();
		
		/* Find target */
		if (now == target)
			return true;
		
		/* Expand the fringe */
		for (int i = expand_1 .. expand_N) {
			if (!vis[i]) {
				queue.push_back(i);
				vis[i] = true;
			}
		}
	}
	return false;
}
