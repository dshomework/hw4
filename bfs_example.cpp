BFS Example:
bool bfs(int src) {
	memset(vis, 0, sizeof(vis));
	vis[src] =true;
        queue.clear();
	queue.push_back(src);
	
	while (!queue.empty()) {
		now = queue.front();
		queue.pop_front();
		
		/* �ж��ҵ� */
		if (now == target)
			return true;
		
		/* ��չ�ڵ����� */
		for (int i = expand_1 .. expand_N) {
			if (!vis[i]) {
				queue.push_back(i);
				vis[i] = true;
			}
		}
	}
	return false;
}
