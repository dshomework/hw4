BFS Example:
bool bfs(int src) {
	memset(vis, 0, sizeof(vis));
	vis[src] =true;
    queue.clear();
	queue.push_back(src);
	
	while (!queue.empty()) {
		now = queue.front();
		queue.pop_front();
		
		/* 判断找到 */
		if (now == target)
			return true;
		
		/* 拓展节点过程 */
		for (int i = expand_1 .. expand_N) {
			if (!vis[i]) {
				queue.push_back(i);
				vis[i] = true;
			}
		}
	}
	return false;
}
